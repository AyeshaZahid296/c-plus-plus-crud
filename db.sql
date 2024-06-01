Create database LMS;


use LMS;

create table Books(
  bookId int primary key identity(1,1) ,
  Name nvarchar(50) not null, 
  Author nvarchar(50) , 
  Publisher nvarchar(50) not null
);

  INSERT INTO [lms].[dbo].[Books] ( [Name], [Author], [Publisher])
VALUES ( 'To Kill a Mockingbird', 'Harper Lee', 'J.B. Lippincott & Co.');

INSERT INTO [lms].[dbo].[Books] ( [Name], [Author], [Publisher])
VALUES ( '1984', 'George Orwell', 'Secker & Warburg');

INSERT INTO [lms].[dbo].[Books] ( [Name], [Author], [Publisher])
VALUES ( 'Pride and Prejudice', 'Jane Austen', 'T. Egerton, Whitehall');
