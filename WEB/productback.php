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
        $name = $_POST['name'];
        $quantity = $_POST['quantity'];
        $unitprice = $_POST['unitprice'];
        $mfgdate = $_POST['mfgdate'];
        $expdate = $_POST['expdate'];
        $sql = "INSERT INTO Products VALUES('$name','$quantity','$unitprice','$mfgdate','$expdate')";
        if(mysqli_query($conn,$sql) == TRUE)
        {
            echo "<script>alert('Product details entered successfully');</script>";
        }
    }
?>