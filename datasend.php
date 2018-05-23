<?php
$COlev = $_POST("CO level"); //a variable for co level ---> receive 
$Write = "<p> Carbon Monoxide level : ".$COlev." </p>";
file_put_contents('displaydata.html',$Write);
?>

//upload this file on the server of the website where the device should send the measured data


// I used 'infinityfree' which is a free domain hosting website, i uploaded it on their severs