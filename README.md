# Bank Management System

This repository contains the code for a Bank Management System application built using C++ and Qt. The system supports various functionalities for managing bank operations and user accounts in a secure way.

## Features

- User Authentication
  - Login and Logout functionalities
- Account Management
  - View account details
- Transaction Management
  - Perform deposit and withdrawal operations
  - Perform amount transferring 
  - View transaction history
- Administrative Features
  - Manage user roles and permissions
  - View system logs and reports
  - Create, update, and delete user accounts
- Request Encryption Decryption
  - Check for data integrity and data consistency
## Extended Features
- Important data backup
  - Make a backup service every 24 hours
- Run server on background
  - Server runs on background and logs are saved in log file
- CI/CD using Jenkins
  - Use Jenkins pipeline to change the visibility of repository 
- Client App. deployment
  -Make a deployment to client application as a desktop application
- Sending emails to clients
  - Use of SMTP to send emails to clients
- Signature encryption
  - Use of hashing for signature data integrety.

## Design Patterns

The application follows several design patterns to ensure a clean and maintainable codebase:

- **Command Pattern**: Used to execute client requests in server side.
- **Chain of Responsibility Pattern**: Used to check the validity of each request.
- **Singleton Pattern**: Used to create a single server and log instance.
- **Observer Pattern**: Used for updating views in response to data changes in client side.
- **Decorator Pattern**: Used for implementing multiple Encryption algorithms.
## Components(Client Side)

The application is composed of several key components:

- `AdminWindow`: Manages administrative operations.
- `Client`: Handles client-side operations.
- `MainWindow`: The main user interface(logging page).
- `Table`: Displays data in tabular form.
- `UserWindow`: Manages user-specific operations.

