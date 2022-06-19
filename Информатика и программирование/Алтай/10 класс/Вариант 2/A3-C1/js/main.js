function randColor() {
    return '#' + Math.floor(Math.random()*parseInt('FFFFFF', 16)).toString(16)
}

blocks = document.querySelectorAll('.block');

blocks.forEach((e) => {
    e.addEventListener("click", () => {
        e.style.backgroundColor = randColor();
        console.log(e);
    });
});

form = document.querySelector('form');
btn = document.querySelector('button');

btn.addEventListener("click", (e) => {
    e.preventDefault();
    block = document.querySelector(`.block-${form.elements.number.value}`);
    console.log(block);
    block.style.backgroundColor = `rgb(${form.elements.red.value}, ${form.elements.green.value}, ${form.elements.blue.value})`;
});