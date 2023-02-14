### <ins>CSS (Cascading Style Sheet) </ins>
-There are three ways to use css.
    1. Inline css (write inside html tag)
    2. Internal css( write inside the html page inside head tag)
    3. External write in external .css file and link it to the html file.

#### <ins> How css is executed by browser (how it works)</ins>

![DOM node tree](https://developer.mozilla.org/en-US/docs/Learn/CSS/First_steps/How_CSS_works/rendering.svg "How css executed")
 - If browser doesn't understand your code (due to either your browser is not updated version or due to you do some mistake(miss-spell or use wrong property )) it simply ignore that line of code and go to next declaration.

#### <ins>CSS Selector</ins>
![CSS selector](https://1.bp.blogspot.com/-hRPFJE_daVo/WTUdhDnewpI/AAAAAAAAAMc/RqedHz5gh8Y5L1jErAYV_j1S09CSka-XgCLcB/s1600/css-syntax-min.png "css selector")

#### <ins> Colors in css </ins>
- color name: for ex- blue, green, ...
- color code (hexadecimal): for ex- #f4f4f4 - lite grey, #555555 - dark grey.
- rgb(0-255, 0-255, 0-2555): red, green, blue color value.
- hsl(value)

#### <ins> web safe fonts </ins>
find image and attach here

#### shorthand for fonts
simply go to mdn shorhand 

#### margin padding (Box model):
![Box model](https://www.simplilearn.com/ice9/free_resources_article_thumb/CSS-Box-Model.png "box model")

- simply padding is space that inside border and margin is outside space of the border of element.

#### link css
- a:hover{set property} - on hover it will load property
- a:active{} - on active
- a: visited{} - if any page visited once it will load that property

#### positioning in css

go to mdn reference first to see working of all
- static
- relative
- absolute
- fixed
- initial
- inherit
- If we use absolute and if its parent position is not set to relative it will take is absolute value from the body
- if you want to move any element inside box and you are using absolute then first make its parent position to relative then use absolute its children to move inside the block.

#### psedu selector properties for forms, ...
- let take an ex- form with eight input tag and have class myForm
- to set css property to particular child we have
```css
.myForm:first-child{
    color: red;
}
.myForm:last-child{
    color:yellow;
}
.myForm:nth-child(3){
    color: green;
}
.myForm:nth-child(even){
    color: cyan;
}
```
let's have one project

