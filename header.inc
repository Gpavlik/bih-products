<header class="header">    
  <div class="container header__container">
    <h2 id="greetingMessage"></h2>
    
    <!-- Логотип -->
    <a class="logo" href="./index.html">
      <img src="./images/logo.png" alt="BeHealth logo" width="160">
    </a>

    <!-- Список контактів -->
    <ul class="contacts">
      <li class="contacts__contact">
        <a class="contacts__contact-mail" href="mailto:info@behealth.com.ua">
          <svg class="contacts__contact-icon" width="20" height="20">
            <use href="./images/sprite.svg#icon-envelope"></use>
          </svg>info@behealth.com.ua
        </a>
      </li>
      <li class="contacts__contact">
        <a class="contacts__contact-phone" href="tel:+380675474099">
          <svg class="contacts__contact-icon" width="20" height="20">
            <use href="./images/sprite.svg#icon-phone"></use>
          </svg>+38 (067) 547-40-99
        </a>
      </li>
      <li class="contacts__contact">
        <a class="contacts__contact-phone" href="tel:+380445926862">
          <svg class="contacts__contact-icon" width="20" height="20">
            <use href="./images/sprite.svg#icon-phone"></use>
          </svg>+38 (044) 592-68-62
        </a>
      </li>
    </ul>

    <!-- Кнопки управління (Виправлено: кнопка та посилання рознесені) -->
    <div class="header__actions">
      <button type="button" class="btn" onclick="toggleDarkMode()">Тема</button>
      <button type="button" id="adminBtn" class="btn" onclick="checkAdminPassword()">🔧</button>
    </div>
  </div>
  </div>
</header>