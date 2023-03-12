/*
    This program is about inventory management system
    ==== Key features:
        * Add product (name, description, stock, price)
        * Edit/Modify products
        * Delete
        * Search
        * Report
    Author: Francis Rudra D Cruze
    Email: rudra16-563@diu.edu.bd
    Phone: +8801870179066
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PRODUCTS 100 // maximum number of products in the inventory

// product structure
typedef struct {
    char name[50];
    char description[100];
    int quantity;
    float price;
} product_t;

// function declarations
void add_product(product_t products[], int* num_products);
void modify_product(product_t products[], int num_products);
void delete_product(product_t products[], int* num_products);
void search_products(product_t products[], int num_products);
void display_products(product_t products[], int num_products);
void generate_sales_report(product_t products[], int num_products);

int main() {
    product_t products[MAX_PRODUCTS]; // array of products in the inventory
    int num_products = 0; // number of products currently in the inventory

    // read the inventory data from a file
    FILE* fp;
    fp = fopen("inventory.o", "r");
    if (fp != NULL) {
        fread(&num_products, sizeof(int), 1, fp);
        fread(products, sizeof(product_t), num_products, fp);
        fclose(fp);
    }

    // display the main menu
    int choice;
    do {
        printf("Inventory Management System\n");
        printf("---------------------------\n");
        printf("1. Add new product\n");
        printf("2. Modify existing product\n");
        printf("3. Delete product\n");
        printf("4. Search for products\n");
        printf("5. Display all products\n");
        printf("6. Generate sales report\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add_product(products, &num_products);
                break;
            case 2:
                modify_product(products, num_products);
                break;
            case 3:
                delete_product(products, &num_products);
                break;
            case 4:
                search_products(products, num_products);
                break;
            case 5:
                display_products(products, num_products);
                break;
            case 6:
                generate_sales_report(products, num_products);
                break;
            case 7:
                // write the inventory data back to the file
                fp = fopen("inventory.o", "w");
                if (fp != NULL) {
                    fwrite(&num_products, sizeof(int), 1, fp);
                    fwrite(products, sizeof(product_t), num_products, fp);
                    fclose(fp);
                }
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (choice != 7);

    return 0;
}

// Function for add products to the inventory
void add_product(product_t products[], int* num_products) {
    // check if the inventory is full
    if (*num_products >= MAX_PRODUCTS) {
        printf("Inventory is full. Cannot add more products.\n");
        return;
    }

    // get the product details from the user
    product_t new_product;
    printf("Enter product name: ");
    fflush(stdin);
    gets(new_product.name);
    printf("Enter product description: ");
    fflush(stdin);
    gets(new_product.description);
    printf("Enter product quantity: ");
    fflush(stdin);
    scanf("%d", &new_product.quantity);
    printf("Enter product price: ");
    fflush(stdin);
    scanf("%f", &new_product.price);

    // add the new product to the inventory
    products[*num_products] = new_product;
    (*num_products)++;

    printf("Product added to inventory.\n");
}

// Function for modify the inventory products
void modify_product(product_t products[], int num_products) {
    // check if the inventory is empty
    if (num_products == 0) {
        printf("Inventory is empty. No products to modify.\n");
        return;
    }

    // get the product name to modify from the user
    char name[50];
    printf("Enter the name of the product to modify: ");
    scanf("%s", name);

    // find the product in the inventory
    int index = -1;
    for (int i = 0; i < num_products; i++) {
        if (strcmp(products[i].name, name) == 0) {
            index = i;
            break;
        }
    }

    // check if the product was found
    if (index == -1) {
        printf("Product not found in inventory.\n");
        return;
    }

    // get the new details for the product from the user
    product_t new_product;
    printf("Enter new product name: ");
    fflush(stdin);
    gets(products[index].name);
    printf("Enter new product description: ");
    fflush(stdin);
    gets(products[index].description);
    printf("Enter new product quantity: ");
    fflush(stdin);
    scanf("%d", &products[index].quantity);
    printf("Enter new product price: ");
    fflush(stdin);
    scanf("%f", &products[index].price);

    printf("Product modified in inventory.\n");
}


// Function for delete inventory products
void delete_product(product_t products[], int* num_products) {
    char name[50];
    printf("Enter the name of the product to delete: ");
    scanf("%s", name);

    int found = 0;
    for (int i = 0; i < *num_products; i++) {
        if (strcmp(products[i].name, name) == 0) {
            found = 1;
            // shift the elements after the product up by one position
            for (int j = i; j < *num_products - 1; j++) {
                products[j] = products[j+1];
            }
            // reduce the number of products in the inventory by one
            (*num_products)--;
            printf("Product deleted successfully.\n");
            break;
        }
    }
    if (!found) {
        printf("Product not found.\n");
    }
}

// Function for search products from inventory
void search_products(product_t products[], int num_products) {
    char search_term[100];
    printf("Enter a product name to search: ");
    scanf("%s", search_term);

    int found = 0;

    for (int i = 0; i < num_products; i++) {
        if (strcmp(products[i].name, search_term) == 0) {
            printf("Product found:\n");
            printf("Name: %s\n", products[i].name);
            printf("Price: %f\n", products[i].price);
            found = 1;
        }
    }

    if (!found) {
        printf("No products found for search term \"%s\"\n", search_term);
    }
}

// Function for show the inventory products
void display_products(product_t products[], int num_products) {
    if (num_products == 0) {
        printf("No products in inventory.\n");
    } else {
        printf("%-20s %-30s %-10s %-10s\n", "Name", "Description", "Quantity", "Price");
        printf("--------------------------------------------------------------------------\n");
        for (int i = 0; i < num_products; i++) {
            printf("%-20s %-30s %-10d $%-10.2f\n", products[i].name, products[i].description, products[i].quantity, products[i].price);
        }
    }
}

// Function for generate the sales report.
void generate_sales_report(product_t products[], int num_products) {
    float total_sales = 0.0;
    printf("Sales Report\n");
    printf("------------\n");
    for (int i = 0; i < num_products; i++) {
        float sales = products[i].price * products[i].quantity;
        printf("%d. %s - %.2f units sold - Total sales: $%.2f\n", i+1, products[i].name, (float)products[i].quantity, sales);
        total_sales += sales;
    }
    printf("Total sales: $%.2f\n", total_sales);
}

