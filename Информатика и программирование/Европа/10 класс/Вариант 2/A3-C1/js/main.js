imgs = document.querySelectorAll('img');

imgs.forEach((e) => {
    e.addEventListener("click", () => {
        e.classList.toggle("hidden");
    });
});