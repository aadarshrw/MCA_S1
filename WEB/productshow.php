<html>
    <head>
        <title>Product Details</title>
        <style>
            body
            {
                font-family: sans-serif;
            }
            table
            {
                text-align: center;
                border: black;
            }
            div
            {
                position: absolute;
                top: 32%;
                left: 32%;
                padding: 40px;
                background-color: #F0F0F0;
            }
            th,td
            {
                padding: 12px;
            }
            th
            {
                background-color: black;
                color: white;
            }
        </style>
    </head>
    <body>
        <div>
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
                    $sql = "SELECT * FROM Products";
                    $res = mysqli_query($conn,$sql);
                    $num = mysqli_num_rows($res);

                    if($num > 0)
                    {
                        echo "<table border="."show"."><tr><th>Name</th><th>Quantity</th><th>Unit Price</th><th>MFG Date</th><th>EXP Date</th></tr>";
                        while($row = mysqli_fetch_array($res))
                        {
                            echo "<tr><td>".$row['name']."</td><td>".$row['quantity']."</td><td>".$row['unitprice']."</td><td>".$row['mfgdate']."</td><td>".$row['expdate']."</td></tr>";
                        }
                        echo "</table>";
                    }
                }
            ?>
        </div>
    </body>
</html>