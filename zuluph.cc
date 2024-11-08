<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Casino Page with GCash Payment</title>
    <link rel="stylesheet" href="styles.css">
</head>
<body>
    <h1>Welcome to Our Casino!</h1>
    <div id="casino-game">
        <p>Try your luck! Click the button to play.</p>
        <button onclick="playGame()">Play Game</button>
        <p id="result"></p>
    </div>

    <div id="gcash-payment">
        <h2>GCash Payment</h2>
        <p>Deposit money to play:</p>
        <button onclick="startGcashPayment()">Deposit with GCash</button>
    </div>

    <script src="script.js"></script>
</body>
</html>

