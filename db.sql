Create database LibararyDB1;


use LibararyDB1;


CREATE TABLE authors (
  author_id INT NOT NULL IDENTITY(1,1),
  name VARCHAR(100) NOT NULL,
  nationality VARCHAR(50) NULL,
  PRIMARY KEY (author_id)
);
CREATE TABLE books (
  book_id INT NOT NULL IDENTITY(1,1),
  title VARCHAR(255) NOT NULL,
  author_id INT NULL,
  publisher VARCHAR(100) NULL,
  genre VARCHAR(50) NULL,
  status VARCHAR(10) NOT NULL DEFAULT 'available',
  PRIMARY KEY (book_id),
  INDEX fk_books_authors_idx (author_id),
  CONSTRAINT fk_books_authors
    FOREIGN KEY (author_id)
    REFERENCES authors (author_id)
    ON DELETE SET NULL
    ON UPDATE CASCADE
);
CREATE TABLE members (
  member_id INT NOT NULL IDENTITY(1,1),
  first_name VARCHAR(50) NOT NULL,
  last_name VARCHAR(50) NOT NULL,
  email VARCHAR(100) NOT NULL,
  phone_number VARCHAR(15) NULL,
  PRIMARY KEY (member_id)
);


CREATE TABLE issue_return_books (
  issue_id INT NOT NULL IDENTITY(1,1),
  book_id INT NOT NULL,
  member_id INT NOT NULL,
  issue_date DATE NOT NULL,
  return_date DATE NULL,
  PRIMARY KEY (issue_id),
  INDEX fk_issue_return_books_books_idx (book_id),
  INDEX fk_issue_return_books_members_idx (member_id),
  CONSTRAINT fk_issue_return_books_books
    FOREIGN KEY (book_id)
    REFERENCES books (book_id)
    ON DELETE CASCADE
    ON UPDATE CASCADE,
  CONSTRAINT fk_issue_return_books_members
    FOREIGN KEY (member_id)
    REFERENCES members (member_id)
    ON DELETE CASCADE
    ON UPDATE CASCADE
);



INSERT INTO authors (name, nationality) VALUES
('J.K. Rowling', 'British'),
('George R.R. Martin', 'American'),
('J.R.R. Tolkien', 'British'),
('Harper Lee', 'American'),
('Agatha Christie', 'British'),
('Ernest Hemingway', 'American'),
('F. Scott Fitzgerald', 'American'),
('Mark Twain', 'American'),
('Jane Austen', 'British'),
('Charles Dickens', 'British');


INSERT INTO books (title, author_id, publisher, genre, status) VALUES
('Harry Potter and the Philosophers Stone', 1, 'Bloomsbury', 'Fantasy', 'available'),
('A Game of Thrones', 2, 'Bantam Books', 'Fantasy', 'issued'),
('The Fellowship of the Ring', 3, 'George Allen & Unwin', 'Fantasy', 'available'),
('To Kill a Mockingbird', 4, 'J.B. Lippincott & Co.', 'Fiction', 'issued'),
('Murder on the Orient Express', 5, 'Collins Crime Club', 'Mystery', 'available'),
('The Old Man and the Sea', 6, 'Charles Scribners Sons', 'Fiction', 'available'),
('The Great Gatsby', 7, 'Charles Scribners Sons', 'Fiction', 'issued'),
('Adventures of Huckleberry Finn', 8, 'Chatto & Windus', 'Fiction', 'available'),
('Pride and Prejudice', 9, 'T. Egerton', 'Romance', 'available'),
('A Tale of Two Cities', 10, 'Chapman & Hall', 'Historical Fiction', 'issued');

INSERT INTO members (first_name, last_name, email, phone_number) VALUES
('John', 'Doe', 'johndoe@example.com', '123-456-7890'),
('Jane', 'Smith', 'janesmith@example.com', '234-567-8901'),
('Alice', 'Johnson', 'alicejohnson@example.com', '345-678-9012'),
('Robert', 'Brown', 'robertbrown@example.com', '456-789-0123'),
('Michael', 'Davis', 'michaeldavis@example.com', '567-890-1234'),
('Emily', 'Miller', 'emilymiller@example.com', '678-901-2345'),
('Jessica', 'Wilson', 'jessicawilson@example.com', '789-012-3456'),
('David', 'Moore', 'davidmoore@example.com', '890-123-4567'),
('Sarah', 'Taylor', 'sarahtaylor@example.com', '901-234-5678'),
('Daniel', 'Anderson', 'danielanderson@example.com', '012-345-6789');


