function personInfo(firstname, lastname, dob){
    this.firstname = firstname;
    this.lastname = lastname;
    this.dob = new Date(dob);
    this.getdob = function (){
        return this.dob.getFullYear();
    }
       this.sanjee = function(){ return `${this.firstname} ${this.lastname}`;
    }
}

const p1 = new personInfo('joe','doe', '2-2-2002');
