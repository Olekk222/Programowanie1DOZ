body {
    margin: 0;
    background-color: #eef3f7;
    color: #102a43;
    font-family: Arial, sans-serif;
    font-size: 16px;
    line-height: 1.6;
}

header {
    background-color: #12304a;
    color: white;
    text-align: center;
    padding: 35px 20px;
    min-height: 150px;
}

header h1 {
    margin: 0;
    font-size: 42px;
    font-weight: bold;
}

header .haslo {
    font-size: 18px;
    margin: 5px 0;
}

header p {
    font-size: 14px;
}

nav {
    background-color: #087e8b;
    text-align: center;
    padding: 16px;
}

nav a {
    color: white;
    text-decoration: none;
    font-weight: bold;
    margin: 0 25px;
}

nav a:hover {
    color: #dffcff;
    text-decoration: underline;
}

main {
    width: 80%;
    max-width: 900px;
    margin: 25px auto;
}

section {
    background-color: white;
    margin-bottom: 20px;
    padding: 25px;
    border: 1px solid #d5dde5;
    border-radius: 9px;
}

section h2 {
    margin-top: 0;
    border-bottom: 2px solid #087e8b;
    padding-bottom: 8px;
    font-size: 23px;
}

section h3 {
    font-size: 18px;
}

li {
    margin-bottom: 8px;
}

.alert {
    background-color: #e6f7f8;
    border-left: 5px solid #087e8b;
    padding: 15px;
    margin-top: 20px;
    border-radius: 5px;
}

.kafelki {
    display: flex;
    gap: 15px;
}

.kafelek {
    width: 33.33%;
    background-color: #f4f8fa;
    border: 1px solid #d5dde5;
    border-radius: 8px;
    padding: 20px;
    text-align: center;
}

.kafelek h3 {
    color: #087e8b;
}

.kafelek:hover {
    background-color: #e2f4f5;
    transform: translateY(-4px);
}

section img {
    width: 100%;
    max-width: 600px;
    display: block;
    margin: 20px auto;
    border: 2px solid #087e8b;
    border-radius: 8px;
}

.warning {
    background-color: #fff4d6;
    border: 2px solid #e0a800;
    padding: 18px;
    margin-top: 20px;
    border-radius: 8px;
}

.przyciski {
    display: flex;
    gap: 10px;
    flex-wrap: wrap;
}

button {
    background-color: #087e8b;
    color: white;
    padding: 12px 18px;
    border: none;
    border-radius: 6px;
    font-size: 15px;
    cursor: pointer;
}

button:hover {
    background-color: #075f69;
    transform: translateY(-2px);
}

form {
    width: 100%;
}

label {
    display: block;
    font-weight: bold;
    margin-top: 15px;
    margin-bottom: 5px;
}

input,
textarea {
    width: 100%;
    box-sizing: border-box;
    padding: 12px;
    border: 1px solid #b8c4ce;
    border-radius: 6px;
    font-family: Arial, sans-serif;
    font-size: 15px;
}

textarea {
    min-height: 150px;
    resize: vertical;
}

input:focus,
textarea:focus {
    outline: none;
    border: 2px solid #087e8b;
    background-color: #f2fbfc;
}

form button {
    margin-top: 20px;
}

footer {
    background-color: #12304a;
    color: white;
    text-align: center;
    padding: 20px;
    margin-top: 30px;
}

@media (max-width: 700px) {

    main {
        width: 90%;
    }

    nav a {
        display: block;
        margin: 8px;
    }

    .kafelki {
        flex-direction: column;
    }

    .kafelek {
        width: auto;
    }

    .przyciski {
        flex-direction: column;
    }
}
