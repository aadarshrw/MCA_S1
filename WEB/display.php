<html>
<head>
    <title>Number Display</title>
</head>
<body>
    <h1>Number Display</h1>
    <p>Generated Number: <?php echo isset($_POST['generate']) ? rand(1, 100) : ''; ?></p>
</body>
</html>
