# <ins> Grid in css </ins>
- Grid is 2-D layout for the web. It let's you lay to build complex feature through straight forward way.
- Grid is combination of both row and columns line that make your design fit to the screen.
- The gap between row and column is called gutter (row-gutter and column-gutter)
- Defining a grid
```css
.container{
    display: grid;
}
```
- then you have tell that how much column you want to make through grid
```css
.container{
    display: grid;
    grid-template-columns: 1fr 1fr 1fr;
}
```
- 1fr unit means 1 fraction of available space in the grid container
- __grid-template-rows: minmax(100px , auto)__ - this is used to set height of the box and minmax fn used to set min height and max height(here maxheight is auto that means it will grow as we have content inside box.)
- now let consider you have four element in html i.e container > header, article, aside and footer.
```css
.container{
    display: grid;
    grid-template-columns: 1fr 3fr /*repeat(2, 1fr, 3fr) we can also use repeat fn.*/

}
header {
  grid-column: 1 / 3; /* i.e header will take 1 to 3 columns(i.e all)*/
  grid-row: 1; /* i.e at row first*/
}

article {
  grid-column: 2; /*this will going to take only 2 column (space for 1st column will remain threre.*/
  grid-row: 2; /*same as above i.e second row*/
}

aside {
  grid-column: 1; /*in row 2nd in 1st column (we have already article in row 2nd but it start from column 2*/
  grid-row: 2;
}

footer {
  grid-column: 1 / 3; /*same as header it start from 1st column and go upto 3rd column.*/
  grid-row: 3; /*in 3rd row*/
}
```

- we have one more way to use grid and this is the simplest way to use grid model.
- simply put in pair inside grid-template-areas
and define wherever you want to use it.
- most often we declare same way we it is like header is header, sidebar is content , ....
```css
.container {
  display: grid;
  grid-template-areas:
    "header header"
    "sidebar content"
    "footer footer";
  grid-template-columns: 1fr 3fr;
  gap: 20px;
}

header {
  grid-area: header;
}

article {
  grid-area: content;
}

aside {
  grid-area: sidebar;
}

footer {
  grid-area: footer;
}
```
- go to mdn grid for more reference.
