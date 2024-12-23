#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct FileNode {
    string fileName;
    string content;
    FileNode* left;
    FileNode* right;
};

FileNode* createFileNode(const string& fileName) {
    FileNode* newNode = new FileNode;
    newNode->fileName = fileName;
    newNode->content = "";
    newNode->left = newNode->right = nullptr;

    // Create an empty file on disk
    ofstream file(fileName);
    file.close();

    return newNode;
}


FileNode* insertFileNode(FileNode* root, const string& fileName) {
    if (root == nullptr) {
        return createFileNode(fileName);
    }

    if (fileName < root->fileName) {
        root->left = insertFileNode(root->left, fileName);
    } else if (fileName > root->fileName) {
        root->right = insertFileNode(root->right, fileName);
    }

    return root;
}

FileNode* searchFileNode(FileNode* root, const string& fileName) {
    if (root == nullptr || root->fileName == fileName) {
        return root;
    }

    if (fileName < root->fileName) {
        return searchFileNode(root->left, fileName);
    } else {
        return searchFileNode(root->right, fileName);
    }
}

FileNode* findMinFileNode(FileNode* root) {
    while (root->left != nullptr) {
        root = root->left;
    }
    return root;
}

FileNode* deleteFileNode(FileNode* root, const string& fileName) {
    if (root == nullptr) {
        return root;
    }

    if (fileName < root->fileName) {
        root->left = deleteFileNode(root->left, fileName);
    } else if (fileName > root->fileName) {
        root->right = deleteFileNode(root->right, fileName);
    } else {
        if (root->left == nullptr) {
            FileNode* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == nullptr) {
            FileNode* temp = root->left;
            delete root;
            return temp;
        }

        FileNode* temp = findMinFileNode(root->right);
        root->fileName = temp->fileName;
        root->right = deleteFileNode(root->right, temp->fileName);
    }
    return root;
}

void inorderTraversal(FileNode* root) {
    if (root != nullptr) {
        inorderTraversal(root->left);
        cout << root->fileName << endl;
        inorderTraversal(root->right);
    }
}

void preorderTraversal(FileNode* root) {
    if (root != nullptr) {
        cout << root->fileName << endl;
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}

void postorderTraversal(FileNode* root) {
    if (root != nullptr) {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        cout << root->fileName << endl;
    }
}

void writeFile(FileNode* root, const string& fileName, const string& content) {
    FileNode* fileNode = searchFileNode(root, fileName);
    if (fileNode != nullptr) {
        ofstream file(fileName);
        file << content;
        file.close();
        fileNode->content = content;
    } else {
        cout << "File not found." << endl;
    }
}

string readFile(FileNode* root, const string& fileName) {
    FileNode* fileNode = searchFileNode(root, fileName);
    if (fileNode != nullptr) {
        return fileNode->content;
    } else {
        cout << "File not found." << endl;
        return "";
    }
}

int main() {
    FileNode* root = nullptr;
    string fileName, content;
    int choice;

    while (true) {
        cout << "1. Insert a file" << endl;
        cout << "2. Write content to a file" << endl;
        cout << "3. Read content from a file" << endl;
        cout << "4. Delete a file" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter file name: ";
                cin >> fileName;
                root = insertFileNode(root, fileName);
                break;
            case 2:
                cout << "Enter file name: ";
                cin >> fileName;
                cout << "Enter content: ";
                cin.ignore();
                getline(cin, content);
                writeFile(root, fileName, content);
                break;
            case 3:
                cout << "Enter file name: ";
                cin >> fileName;
                content = readFile(root, fileName);
                cout << "Content of " << fileName << ": " << content << endl;
                break;
            case 4:
                cout << "Enter file name: ";
                cin >> fileName;
                root = deleteFileNode(root, fileName);
                break;
            case 5:
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
