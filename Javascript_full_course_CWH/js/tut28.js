// quiz 
// create a library class which have following properties
// a constructor must take bookList as an arguement 
// getBookList()
// issueBook(bookName,user);
// returnBook(bookName);

// library class 
class library{
    constructor(bookList){
        this.bookList = bookList;
        this.issuedBooks = {};
        
    }
    getBookList() {
        this.bookList.forEach(element => {
            console.log(element);
        });
    }
    issueBook(bookName, user){
        if(this.issuedBooks[bookName]==undefined){
            this.issuedBooks[bookName]= user;
        }
        else {
            console.log('this book is already issued !');
        }
    }
    returnBook(bookName){
        delete this.issuedBooks[bookName];
    }
}

/*
go to console and create object of library called harrylib or anything else 
harrylib = new library(['harry potter', 'virat kohli', 'rohit sharma', 'mahendra singh dhoni']);
then you can run getBookList()
then you can issueBook(bookName, user)
then you can issue same book again and see what happen
then you can returnBook(bookName)

*/ 