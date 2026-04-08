# 💳 Mini Digital Banking System (C++)

##  Project Overview
This is a simple console-based Banking System developed using C++.  
The project simulates basic banking operations like managing customers, accounts, and transactions.

It is designed using Object-Oriented Programming concepts such as classes, objects, and encapsulation.

---

##  Features
- Create new customers  
- Create multiple accounts for a customer  
- Deposit money  
- Withdraw money  
- View account balance  
- View recent transactions (last 5 records)  

---

##  Technologies Used
- Language: C++  
- Concepts:
  - Classes & Objects  
  - Vectors (STL)  
  - Basic OOP Design  

---

##  Project Structure

### 1. Customer
- Stores customer ID and name  
- Can hold multiple accounts  

### 2. Account
- Stores account number and balance  
- Performs deposit and withdrawal operations  
- Maintains transaction history  

### 3. Transaction
- Stores transaction type (Deposit/Withdraw)  
- Stores amount and date  

---

##  How to Run

1. Compile the code:
   ```bash
   g++ main.cpp -o bank
   ```

2. Run the program:
   ```bash
   ./bank
   ```

---

##  Key Highlights
- Simple and easy-to-understand structure  
- Menu-driven program  
- Uses dynamic memory (vector) for flexibility  
- Transaction history is limited to last 5 entries for efficiency  

---

##  Future Improvements
- Add file handling to store data permanently  
- Implement login/authentication system  
- Add fund transfer feature  
- Improve UI with better formatting  

---

## 📷 Sample Output
```
--- Banking System ---
1. Create Customer
2. Create Account
3. Deposit
4. Withdraw
5. Show Balance
6. Show Transactions
0. Exit
```

---

## 👨‍💻 Author
Rahul Singh  

---

## 📄 License
This project is for educational purposes only.# bank-management-system
