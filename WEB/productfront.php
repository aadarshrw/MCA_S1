<html>
    <head>
        <title>Product Details</title>
        <style>
            body
            {
                font-family: sans-serif;
            }
            a
            {
                position: absolute;
                top: 45%;
                left: 60%;
                text-decoration: none;
                color: black;
            }
            a:hover
            {
                position: absolute;
                top: 45%;
                left: 60%;
                text-decoration: none;
                color: grey;
            }
            div
            {
                padding: 30px;
                background-color: #F0F0F0;
                width: fit-content;
                position: absolute;
                top: 10%;
                left: 40%;
            }
            input[type="number"]
            {
                width: 100px;
                height: 40px;
                border: none;
            }
            input[type="text"]
            {
                width: 300px;
                height: 40px;
                border: none;
            }
            input[type="date"]
            {
                width: 150px;
                height: 40px;
                border: none;
            }
            input[type="submit"],[type="reset"]
            {
                width: 300px;
                height: 40px;
                border: none;
            }
        </style>
    </head>
    <body>
        <form action="productback.php" method="post">
            <div>
                <center><h2>Product Details</h2></center><br><br>
                Name: <br><br>
                <input type="text" name="name" placeholder=" Name of the product"><br><br>
                Quantity: <br><br>
                <input type="number" name="quantity" placeholder=" NOS"><br><br>
                Unit-Price: <br><br>
                <input type="number" name="unitprice" placeholder=" ₹"><br><br>
                MFG Date: <br><br>
                <input type="date" name="mfgdate"><br><br>
                EXP Date: <br><br>
                <input type="date" name="expdate"><br><br><br>
                <input type="submit" value="Submit"><br><br>
                <input type="reset" value="clear">
            </div>
            <a href="createtableprod.php">First time here?<br>Click here to create the product table</a>
        </form>
    </body>