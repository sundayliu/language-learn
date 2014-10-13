标题

这是预览模式

Markdown常用语法

# 这是一级标题
## 这是二级标题
### 这是三级标题
#### 这是四级标题
##### 这是五级标题
###### 这是六级标题

## 无序列表
- 文本1
- 文本2
- 文本3


## 有序列表
1. 文本1
2. 文本2
3. 文本3
4. 文本4

## 链接和图片
[图书](http://www.example.com)

![](jianshu.jpg)

This is [an example](http://example.com/ "Title") inline link.

[This link](http://example.net/) has no title attribute.

This is [an example][id] reference-style link.
[id]: http://example.com/  "Optional Title Here"

I get 10 times more traffic from [Google] [1] than from
[Yahoo] [2] or [MSN] [3].

  [1]: http://google.com/        "Google"
  [2]: http://search.yahoo.com/  "Yahoo Search"
  [3]: http://search.msn.com/    "MSN Search"

I get 10 times more traffic from [Google][] than from
[Yahoo][] or [MSN][].

  [google]: http://google.com/        "Google"
  [yahoo]:  http://search.yahoo.com/  "Yahoo Search"
  [msn]:    http://search.msn.com/    "MSN Search"

## 引用

> 一盏灯， 一片昏黄； 一简书， 一杯淡茶。 守着那一份淡定， 品读属于自己的寂寞。 保持淡定， 才能欣赏到最美丽的风景！ 保持淡定， 人生从此不再寂寞。

## 诗的引用

> 窗前明月光
> 窗前明月光
> 窗前明月光
> 窗前明月光

## 粗体和斜体
*一盏灯*， 一片昏黄；**一简书**， 一杯淡茶。 守着那一份淡定， 品读属于自己的寂寞。 保持淡定， 才能欣赏到最美丽的风景！ 保持淡定， 人生从此不再寂寞。

## 表格

| Tables        | Are           | Cool  |
| ------------- |:-------------:| -----:|
| col 3 is      | right-aligned | $1600 |
| col 2 is      | centered      |   $12 |
| zebra stripes | are neat      |    $1 |



![][1]
[1]: http://latex.codecogs.com/gif.latex?\prod%20\(n_{i}\)+1

# 这是 H1 #

## 这是 H2 ##

### 这是 H3 ######

> This is a blockquote with two paragraphs. Lorem ipsum dolor sit amet,
> consectetuer adipiscing elit. Aliquam hendrerit mi posuere lectus.
> Vestibulum enim wisi, viverra nec, fringilla in, laoreet vitae, risus.
> 
> Donec sit amet nisl. Aliquam semper ipsum sit amet velit. Suspendisse
> id sem consectetuer libero luctus adipiscing.

## 好
> This is a blockquote with two paragraphs. Lorem ipsum dolor sit amet,
consectetuer adipiscing elit. Aliquam hendrerit mi posuere lectus.
Vestibulum enim wisi, viverra nec, fringilla in, laoreet vitae, risus.

> Donec sit amet nisl. Aliquam semper ipsum sit amet velit. Suspendisse
id sem consectetuer libero luctus adipiscing.

## 引用嵌套
> This is the first level of quoting.
>
> > This is nested blockquote.
>
> Back to the first level.

### 引用 - 其他语法
> ## 这是一个标题。
> 
> 1. 这是第一行列表项。
> 2. 这是第二行列表项。
> 
> 给出一些例子代码：
> 
>     return shell_exec("echo $input | $markdown_script");
# 代码
    return shell_exec("echo $input | $markdown_script");

1.  This is a list item with two paragraphs. Lorem ipsum dolor
    sit amet, consectetuer adipiscing elit. Aliquam hendrerit
    mi posuere lectus.

    Vestibulum enim wisi, viverra nec, fringilla in, laoreet
    vitae, risus. Donec sit amet nisl. Aliquam semper ipsum
    sit amet velit.

2.  Suspendisse id sem consectetuer libero luctus adipiscing.

*   A list item with a blockquote:

    > This is a blockquote
    > inside a list item.
 
1986\. What a great season.

1986. What a great season.

## 代码
Here is an example of AppleScript:

    tell application "Foo"
        beep
    end tell

Use the `printf()` function.

``There is a literal backtick (`) here.``

## 分割线

---
***
___

## 强调
*single asterisks*

_single underscores_

**double asterisks**

__double underscores__

## Headers

# This is an \<h1\> tag
## This is an \<h2\> tag
###### This is an \<h6\> tag

## Emphasis
*This text will be italic*

_This will also be italic_

**This text will be bold**

__This will also be bold__

*You **can** combine them*

## Lists
### Unordered
* Item 1
* Item 2
  * Item 2a
  * Item 2b
### Ordered
1. Item 1
2. Item 2
3. Item 3
   * Item 3a
   * Item 3b


## Task Lists
- [x] @mentions, #refs, [links](), **formatting**, and <del>tags</del> supported
- [x] list syntax required (any unordered or ordered list supported)
- [x] this is a complete item
- [ ] this is an incomplete item

## Tables
First Header | Second Header
------------ | -------------
Content from cell 1 | Content from cell 2
Content in the first column | Content in the second column

