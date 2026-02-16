#include <iostream>
#include <string>

int main() {
    std::cout << "Dẽẽ’s FoodLink Backend Server Running..." << std::endl;

    // Mock Seller Registration
    std::string sellerName;
    std::cout << "Enter Seller Name: ";
    std::getline(std::cin, sellerName);
    std::cout << "Seller " << sellerName << " registered successfully!" << std::endl;

    // Mock Payment Processing
    double amount;
    std::cout << "Enter Payment Amount: ";
    std::cin >> amount;
    std::cout << "Payment of ₦" << amount << " processed successfully!" << std::endl;

    return 0;
}
