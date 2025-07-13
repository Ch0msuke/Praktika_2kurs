import webbrowser

# Information about the organization
organization_name = "Krasnodar College of Electronic Instrumentation"
address = "Address: Krasnodar, ul. Zipovskaya, d. 7, 350072"
contact_info = "Phone: +7(861)257-04-76, Email: kkep@kkep.ru"

# HTML template
html_content = f"""
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Organization Information</title>
    <style>
        body {{
            font-family: 'Arial', sans-serif; /* Default font */
            background-color: #f4f4f4;
            color: #333;
            margin: 0;
            padding: 0;
            display: flex;
            justify-content: center;
            align-items: center;
            height: 100vh;
        }}
        .container {{
            text-align: center;
            background: #fff;
            padding: 20px;
            border-radius: 8px;
            box-shadow: 0 4px 6px rgba(0, 0, 0, 0.1);
        }}
        h1 {{
            font-size: 2em;
            margin-bottom: 20px;
        }}
        p {{
            font-size: 1.2em;
            line-height: 1.6;
        }}
        /* Font variants */
        .font1 {{
            font-family: 'Arial', sans-serif;
        }}
        .font2 {{
            font-family: 'Times New Roman', serif;
        }}
        .font3 {{
            font-family: 'Verdana', sans-serif;
        }}
        .font4 {{
            font-family: 'Georgia', serif;
        }}
        .font5 {{
            font-family: 'Courier New', monospace;
        }}
    </style>
</head>
<body>
    <div class="container">
        <h1>Organization Name for Practical Training</h1>
        <p class="font1">Organization: {organization_name}</p>
        <p class="font2">Address: {address}</p>
        <p class="font3">Contacts: {contact_info}</p>
        <p>Font Variants:</p>
        <p class="font1">1. Arial (sans-serif)</p>
        <p class="font2">2. Times New Roman (serif)</p>
        <p class="font3">3. Verdana (sans-serif)</p>
        <p class="font4">4. Georgia (serif)</p>
        <p class="font5">5. Courier New (monospace)</p>
    </div>
</body>
</html>
"""

# Save the HTML file
with open("organization_info.html", "w", encoding="utf-8") as file:
    file.write(html_content)

# Open the page in the browser
webbrowser.open("organization_info.html")
