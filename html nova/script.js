// Adiciona o estilo
const style = document.createElement('style');
style.innerHTML = `
  body {
    margin: 0;
    font-family: Arial, sans-serif;
    background-color: #F0F9F0;
    color: #333;
  }
  .navbar {
    display: flex;
    justify-content: center;
    gap: 1.5rem;
    background-color: #fff;
    padding: 1rem 0;
    box-shadow: 0 2px 4px rgba(0,0,0,0.1);
  }
  .navbar a {
    color: #66BB6A;
    font-size: 1.5rem;
    text-decoration: none;
    transition: transform 0.3s, color 0.3s;
  }
  .navbar a:hover {
    color: #4CAF50;
    transform: scale(1.2);
  }
  .content {
    text-align: center;
    padding: 4rem 1rem;
  }
  .content h1 {
    color: #4FC3F7;
    font-size: 2.5rem;
    margin-bottom: 0.5rem;
  }
  .content p {
    font-size: 1.1rem;
    margin-top: 0;
    margin-bottom: 1.5rem;
  }
  .learn-more {
    background-color: #66BB6A;
    color: #fff;
    border: none;
    padding: 12px 24px;
    font-size: 1rem;
    border-radius: 25px;
    cursor: pointer;
    transition: background-color 0.3s, transform 0.3s;
    margin-top: 1rem;
  }
  .learn-more i {
    margin-right: 8px;
  }
  .learn-more:hover {
    background-color: #4CAF50;
    transform: translateY(-2px);
  }
  @media (max-width: 600px) {
    .navbar {
      padding: 0.5rem 0;
    }
    .navbar a {
      font-size: 1.2rem;
    }
    .content {
      padding: 2rem 1rem;
    }
  }
`;
// Adiciona o link para o Font Awesome
const fontAwesomeLink = document.createElement('link');
fontAwesomeLink.rel = 'stylesheet';
fontAwesomeLink.href = 'https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.0.0-beta3/css/all.min.css';
document.head.appendChild(fontAwesomeLink);

document.head.appendChild(style);

// Cria o header com navbar
const header = document.createElement('header');
const nav = document.createElement('nav');
nav.className = 'navbar';

const links = [
  { href: '#', title: 'Início', icon: 'fa-house' },
  { href: '#', title: 'Sobre', icon: 'fa-user' },
  { href: '#', title: 'Serviços', icon: 'fa-cog' },
  { href: '#', title: 'Contato', icon: 'fa-phone' }
];

links.forEach(linkInfo => {
  const a = document.createElement('a');
  a.href = linkInfo.href;
  a.title = linkInfo.title;
  a.innerHTML = `<i class="fa-solid ${linkInfo.icon}"></i>`;
  nav.appendChild(a);
});

header.appendChild(nav);
document.body.appendChild(header);

// Cria o conteúdo principal
const main = document.createElement('main');
main.className = 'content';

const h1 = document.createElement('h1');
h1.textContent = 'Qualidade de Vida';

const p = document.createElement('p');
p.textContent = 'Bem-vindo ao nosso site sobre qualidade de vida e bem-estar. Descubra dicas para uma vida mais saudável e feliz.';

const button = document.createElement('button');
button.className = 'learn-more';
button.innerHTML = `<i class="fa-solid fa-arrow-right"></i> Saiba Mais`;

main.appendChild(h1);
main.appendChild(p);
main.appendChild(button);
document.body.appendChild(main);
