form = document.querySelector("form");
btn = document.querySelector("button");

btn.addEventListener("click", (e) => {
    e.preventDefault();
    if (form.elements.login.value == "test" && form.elements.password.value == "test123") {
        window.location.href = "index.html";
    }
});