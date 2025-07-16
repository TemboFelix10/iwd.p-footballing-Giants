<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8" />
  <title>MTN Super League News</title>
  <style>
    body {
      font-family: Arial, sans-serif;
      padding: 20px;
      background: #f4f6f8;
    }

    h1 {
      text-align: center;
      color: #1e2a78;
    }

    #news-container {
      max-width: 800px;
      margin: 20px auto;
    }

    .headline {
      background: white;
      margin-bottom: 16px;
      padding: 16px;
      border-radius: 8px;
      box-shadow: 0 0 6px rgba(0,0,0,0.1);
    }

    .headline h2 {
      margin: 0 0 8px;
      font-size: 1.2em;
      color: #1e2a78;
    }

    .headline h2 a {
      text-decoration: none;
      color: #1e2a78;
    }

    .headline h2 a:hover {
      text-decoration: underline;
    }

    .meta {
      font-size: 0.9em;
      color: #555;
      margin-bottom: 12px;
    }

    .headline p {
      margin: 0;
      line-height: 1.5;
    }
  </style>
</head>
<body>

  <h1>MTN Super League News</h1>
  <div id="news-container"></div>

  <script>
    [
  {
    "title": "Mutapa set for Green Eagles top job",
    "date": "June 26, 2025",
    "source": "ZambianFootball",
    "excerpt": "Perry Mutapa has emerged as the frontrunner for the Green Eagles top job following the sacking of Kebby Hachipuka.",
    "url": "https://www.zambianfootball.co.zm/mutapa-green-eagles-job"
  },
  {
    "title": "Mufulira Wanderers Part Ways with Coach Tenant Chilumba",
    "date": "June 23, 2025",
    "source": "ZamFoot",
    "excerpt": "Mufulira Wanderers have officially parted ways with head coach Tenant Chilumba after a series of disappointing results.",
    "url": "https://www.zamfoot.com/mufulira-chilumba-exit"
  },
  {
    "title": "ZESCO United Sign Tanzanian Forward",
    "date": "June 20, 2025",
    "source": "FAZ News",
    "excerpt": "ZESCO United have confirmed the signing of a prolific Tanzanian forward to strengthen their squad ahead of the next season.",
    "url": "https://www.faz.co.zm/zesco-united-tanzanian-striker"
  }
]

    fetch('news.json')
      .then(response => response.json())
      .then(newsItems => {
        const container = document.getElementById("news-container");
        newsItems.forEach(item => {
          const div = document.createElement("div");
          div.className = "headline";
          div.innerHTML = `
            <h2><a href="${item.url}" target="_blank">${item.title}</a></h2>
            <div class="meta">${item.date} • ${item.source}</div>
            <p>${item.excerpt}</p>
          `;
          container.appendChild(div);
        });
      })
      .catch(error => {
        document.getElementById("news-container").innerHTML = "<p>Failed to load news.</p>";
        console.error("Error loading news:", error);
      });
  </script>

</body>
</html>
