# <ins> FlexBox </ins>
- 1-D layout method for arranging element through row or column way. This model help us to achieve resposiveness of the page very easily. we can achieve that using float, position, and display: inline, block property also but sometimes this make cumbersome to achieve or may be some time impossible to achieve certain property that we want to adhere in our pages.
#### Inorder to understand well you must know the <span style=" color: red; border-bottom: 1px solid yellow; "> main-axis </span> and <span style=" color: red; border-bottom: 1px solid yellow; "> cross-axis </span> . Also we must know about container properties and its item or children properties.

![FlexBox](https://developer.mozilla.org/en-US/docs/Learn/CSS/CSS_layout/Flexbox/flex_terms.png "FlexBox")

#### some of the container and item properties listed below:-

#### <ins> flex container properties: </ins>
- __display: flex;__ - this makes display flex and default value of flex- direction set to row;
- __flex-direction: column;__ - this change items direction from horizontal to vertical column wise.
- __flex-wrap: wrap;__ - After certain width this change items to go to next line but width must be set.

#### <ins> flex items properties: </ins>
- shorthand for __< flex-direction >__ and __< flex-grow: pr>__
- __flex-flow:__ __< flex-direction pr.> < flex-grow pr.>__
- __flex-grow__ and __flex-shrink__: __< lenth>;__ - this let your item to grow/shrink after certain amount of width.
- sorthand for flex-grow and flex-shrink is __flex__: __flex-grow__ __flex-shrink__;

- __flex-basis__ is same as width and __flex-shrink__ only difference is, this is the min width 

#### vertically(cross-axis) align items of the flex container
- __align-item__: __center__ { flex-start, flex-end, streach(by default), ...}
- __align-self__: __center__ { flex-start, flex-end, streach(by default), ...} - this is for specific child element to set alignment.

#### Horizontally(main-axis) align items of the flex container
#### order 
- we can set order of the any specific item to appear first or last 
- by default order of every element is set to 0
- whichever order value is min that element is closer or first appear from the left.


