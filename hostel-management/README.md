# Hostel Management System (C Project)

A simple terminal-based Hostel Management System built using the C programming language. This project is built entirely from scratch without external libraries or dependencies.

> ✅ Made by Aishwarya Priydarshni  
> 🛠️ Built using only C language and VS Code

---

## 📌 Features

- Add new student records (ID, Name, Room No.)
- View all registered students
- Simple menu-based interface
- Error handling for full hostel
- No external file I/O (stores in memory)

---

## 🗂️ Project Structure

hostel-management-c/
├── hostel.c # Main source code
├── README.md # Project documentation


---

## ⚙️ How to Run

### 🧑‍💻 Compile & Execute (Linux/macOS/WSL/Ubuntu)

```bash
gcc hostel.c -o hostel
./hostel

--- Hostel Management System ---
1. Add Student
2. List All Students
3. Exit
Enter your choice: 1

Enter Student ID: 101
Enter Name: Arya Stark
Enter Room Number: B203

✅ Student Added Successfully:
ID: 101
Name: Arya Stark
Room: B203

🚀 Future Enhancements:-

    File-based storage (save data permanently)

    Search student by name or room

    Delete or update records

    Admin login system

