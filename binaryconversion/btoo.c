#include <stdio.h>
#include <string.h>
#include <math.h>

// Function to convert binary to decimal
int binaryToDecimal(long long binary) {
    int decimal = 0, i = 0, remainder;
    while (binary != 0) {
        remainder = binary % 10;
        binary /= 10;
        decimal += remainder * pow(2, i);
        ++i;
    }
    return decimal;
}

// Function to convert binary to octal
int binaryToOctal(long long binary) {
    int decimal = binaryToDecimal(binary);
    int octal = 0, i = 1;
    while (decimal != 0) {
        octal += (decimal % 8) * i;
        decimal /= 8;
        i *= 10;
    }
    return octal;
}

// Function to convert binary to hexadecimal
void binaryToHexadecimal(long long binary) {
    int decimal = binaryToDecimal(binary);
    char hexadecimal[100];
    int i = 0;
    while (decimal != 0) {
        int remainder = decimal % 16;
        if (remainder < 10)
            hexadecimal[i] = 48 + remainder;
        else
            hexadecimal[i] = 55 + remainder;
        decimal /= 16;
        i++;
    }
    printf("Hexadecimal equivalent: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%c", hexadecimal[j]);
    printf("\n");
}

// Function to convert octal to decimal
int octalToDecimal(int octal) {
    int decimal = 0, i = 0;
    while (octal != 0) {
        decimal += (octal % 10) * pow(8, i);
        octal /= 10;
        ++i;
    }
    return decimal;
}

// Function to convert octal to binary
void octalToBinary(int octal) {
    int decimal = octalToDecimal(octal);
    int binary[100], i = 0;
    while (decimal != 0) {
        binary[i] = decimal % 2;
        decimal /= 2;
        i++;
    }
    printf("Binary equivalent: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binary[j]);
    printf("\n");
}

// Function to convert octal to hexadecimal
void octalToHexadecimal(int octal) {
    int decimal = octalToDecimal(octal);
    char hexadecimal[100];
    int i = 0;
    while (decimal != 0) {
        int remainder = decimal % 16;
        if (remainder < 10)
            hexadecimal[i] = 48 + remainder;
        else
            hexadecimal[i] = 55 + remainder;
        decimal /= 16;
        i++;
    }
    printf("Hexadecimal equivalent: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%c", hexadecimal[j]);
    printf("\n");
}

// Function to convert decimal to binary
void decimalToBinary(int decimal) {
    int binary[100], i = 0;
    while (decimal != 0) {
        binary[i] = decimal % 2;
        decimal /= 2;
        i++;
    }
    printf("Binary equivalent: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binary[j]);
    printf("\n");
}

// Function to convert decimal to octal
int decimalToOctal(int decimal) {
    int octal = 0, i = 1;
    while (decimal != 0) {
        octal += (decimal % 8) * i;
        decimal /= 8;
        i *= 10;
    }
    return octal;
}

// Function to convert decimal to hexadecimal
void decimalToHexadecimal(int decimal) {
    char hexadecimal[100];
    int i = 0;
    while (decimal != 0) {
        int remainder = decimal % 16;
        if (remainder < 10)
            hexadecimal[i] = 48 + remainder;
        else
            hexadecimal[i] = 55 + remainder;
        decimal /= 16;
        i++;
    }
    printf("Hexadecimal equivalent: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%c", hexadecimal[j]);
    printf("\n");
}

// Function to convert hexadecimal to decimal
int hexadecimalToDecimal(char hex[]) {
    int length = strlen(hex);
    int decimal = 0, base = 1;
    for (int i = length - 1; i >= 0; i--) {
        if (hex[i] >= '0' && hex[i] <= '9') {
            decimal += (hex[i] - 48) * base;
            base *= 16;
        } else if (hex[i] >= 'A' && hex[i] <= 'F') {
            decimal += (hex[i] - 55) * base;
            base *= 16;
        }
    }
    return decimal;
}

// Function to convert hexadecimal to binary
void hexadecimalToBinary(char hex[]) {
    int decimal = hexadecimalToDecimal(hex);
    decimalToBinary(decimal);
}

// Function to convert hexadecimal to octal
void hexadecimalToOctal(char hex[]) {
    int decimal = hexadecimalToDecimal(hex);
    printf("Octal equivalent: %d\n", decimalToOctal(decimal));
}

int main() {
    int choice;
    long long binary;
    int octal, decimal;
    char hex[100];

    printf("Choose the conversion you want to perform:\n");
    printf("1. Binary to Decimal\n");
    printf("2. Binary to Octal\n");
    printf("3. Binary to Hexadecimal\n");
    printf("4. Octal to Binary\n");
    printf("5. Octal to Decimal\n");
    printf("6. Octal to Hexadecimal\n");
    printf("7. Decimal to Binary\n");
    printf("8. Decimal to Octal\n");
    printf("9. Decimal to Hexadecimal\n");
    printf("10. Hexadecimal to Binary\n");
    printf("11. Hexadecimal to Octal\n");
    printf("12. Hexadecimal to Decimal\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter a binary number: ");
            scanf("%lld", &binary);
            printf("Decimal equivalent: %d\n", binaryToDecimal(binary));
            break;
        case 2:
            printf("Enter a binary number: ");
            scanf("%lld", &binary);
            printf("Octal equivalent: %d\n", binaryToOctal(binary));
            break;
        case 3:
            printf("Enter a binary number: ");
            scanf("%lld", &binary);
            binaryToHexadecimal(binary);
            break;
        case 4:
            printf("Enter an octal number: ");
            scanf("%d", &octal);
            octalToBinary(octal);
            break;
        case 5:
            printf("Enter an octal number: ");
            scanf("%d", &octal);
            printf("Decimal equivalent: %d\n", octalToDecimal(octal));
            break;
        case 6:
            printf("Enter an octal number: ");
            scanf("%d", &octal);
            octalToHexadecimal(octal);
            break;
        case 7:
            printf("Enter a decimal number: ");
            scanf("%d", &decimal);
            decimalToBinary(decimal);
            break;
        case 8:
            printf("Enter a decimal number: ");
            scanf("%d", &decimal);
            printf("Octal equivalent: %d\n", decimalToOctal(decimal));
            break;
        case 9:
            printf("Enter a decimal number: ");
            scanf("%d", &decimal);
            decimalToHexadecimal(decimal);
            break;
        case 10:
            printf("Enter a hexadecimal number: ");
            scanf("%s", hex);
            hexadecimalToBinary(hex);
            break;
        case 11:
            printf("Enter a hexadecimal number: ");
            scanf("%s", hex);
            hexadecimalToOctal(hex);
            break;
        case 12:
            printf("Enter a hexadecimal number: ");
            scanf("%s", hex);
            printf("Decimal equivalent: %d\n", hexadecimalToDecimal(hex));
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}

