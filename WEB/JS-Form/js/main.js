//  function sum() 
// { 
//     var fn, ln; 
//     fn = new Number(document.getElementById("n1").value); 
//     ln = new Number(document.getElementById("n2").value); 
//     result =  (fn+ln); 
//     document.getElementById("demo2").innerHTML = result; 
// }

function newpage() {
    var x = document.getElementById("form1");
    if (x.style.display === "block") {
        x.style.display = "none";
    } else {
        x.style.display = "block";
    }
     
}
function header(){
	if (document.getElementsBy)	
}
function myFunction() {
    //x = document.getElementById("name").value;
    Name = document.getElementsByTagName("input")[0].value
    document.getElementById("demo").innerHTML = "Name: " + Name;
    LastName = document.getElementsByTagName("input")[1].value
    document.getElementById("log").innerHTML = "LastName: " + LastName;
    Phone = document.getElementsByTagName("input")[2].value
    document.getElementById("numb").innerHTML = "Phone: " + Phone;
    Country = document.getElementsByTagName("input")[3].value
    document.getElementById("country").innerHTML = "Country: " + Country;
    City = document.getElementsByTagName("input")[4].value
    document.getElementById("city").innerHTML = "City: " + City;
}

