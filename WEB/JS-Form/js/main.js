
// function newpage() {
//     var x = document.getElementById("form1");
//     if (x.style.display === "block") {
//         x.style.display = "none";
//     } else {
//         x.style.display = "block";
//     }
     
// }
jQuery(document).ready(function($) {
    $("#myModal").modal('show');
  });
var count = 0;
function newpage() {  
    if(document.getElementById('male').checked) {
        $("#info").html("Mr.");
    } 
    if(document.getElementById('female').checked) {
        $("#info").html("Mrs.");
    }
    $("#info").append(" " + $("#name").val() + " ");
    $("#info").append($("#lastname").val());
}
 function addFunction() {
     var add = "Address: " + $("#address").val();
     var cty = "City: " + $("#city").val(); 
     var co  = "Country: " + $("#country").val(); 
     var ph  = "Phone: " + $("#phone").val(); 
     var nm  = "Name: " + $("#name1").val(); 
     var snm = "Lastname: " + $("#lastname1").val();       
     var arr = [add,cty,co,ph,nm,snm];
        var content = "<table>"
         for(i=0; i<6; i++){
             content += '<tr><td>' + arr[i] + '</td></tr>';
         }
         content += "</table>"
         $('#area').append(content); 
     $("#form2")[0].reset();
     }
// window.onload = function saveSettings() {
//     var name = document.getElementById("name").value;
//     var lastname = document.getElementById("lastname").value;
//     var gender = document.getElementById("gender").value;
//     if (document.getElementById("lastname").checked) {
//         gender = "Mister";
//     } else if(document.getElementById("lastname").checked) {
//         gender = "Misis";
//     }
//     ​var test = { name: name, lastname: lastname, gender: gender }​​​​​​​;
//     localStorage.setItem("test", JSON.stringify(test));
//     var test2 = localStorage.getItem("test");
//     test = JSON.parse(test2);
// }

