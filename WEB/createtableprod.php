<?php
    $servername = "localhost";
    $username = "root";
    $password = "";
    $dbname = "MCA_S1";

    $conn = new mysqli($servername,$username,$password,$dbname);

    if($conn->connect_error)
    {
        echo "could not connect";
    }
    else
    {
        $sql = "CREATE TABLE Products(name varchar(20),quantity varchar(10),unitprice varchar(10),mfgdate date,expdate date)";
        if(mysqli_query($conn,$sql) == TRUE)
        {
            echo "<script>alert('Table created successfully!!');</script>";
        }
    }
?>