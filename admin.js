
    function checkAdminPassword() {
        // Встановіть бажаний пароль нижче
        const correctPassword = "admin123"; 
        
        const enteredPassword = prompt("Будь ласка, введіть пароль адміністратора:");
        
        // Якщо користувач натиснув "Скасувати", prompt повертає null
        if (enteredPassword === null) {
            return; 
        }
        
        if (enteredPassword === correctPassword) {
            // Перенаправлення на сторінку
            window.location.href = "admin_products.html";
        } else {
            alert("Неправильний пароль!");
        }
    }
