<?php
$z[0]=Array("field","",252,271);
$z[0][4]['name']="title";
$z[1]=Array("global","",272,298);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",339,368);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",408,466);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",980,1015);
$z[4][4]['filename']="head.htm";
$z[5]=Array("channel","\r\n        <li class=\"cat-item\"><a href=\"[field:typeurl/]\">[field:typename/]</a> </li>\r\n        ",1125,1358);
$z[5][4]['type']="son";
$z[5][4]['currentstyle']="<li><a href='~typelink~' class='thisclass'>~typename~</a></li>";
$z[6]=Array("list","\r\n      <div class=\"artlist\">\r\n        <div class=\"times\" onMouseOver=\"this.className='ontimes'\" onMouseOut=\"this.className='times'\">[field:pubdate function=\"MyDate('Y年',@me)\"/]<br />\r\n          [field:pubdate function=\"MyDate('m月d日',@me)\"/]</div>\r\n        <div class=\"listt\">\r\n          <div class=\"listtbt\"><a href=\"[field:arcurl/]\">[field:title/]</a></div>\r\n          <div class=\"listtnr\">[field:description function='cn_substr(@me,250)'/]...<a href=\"[field:arcurl/]\">[详情]</a></div>\r\n        </div>\r\n      </div>\r\n      ",1471,2040);
$z[6][4]['pagesize']="8";
$z[7]=Array("pagelist","",2097,2150);
$z[7][4]['listitem']="index,end,pre,next,pageno";
$z[8]=Array("arclist","\r\n        <div class=\"zxal\"> <a href=\"[field:arcurl/]\"><img src=\"[field:picname/]\" width=\"120\" height=\"70\"></a>\r\n          <p><a href=\"[field:arcurl/]\">[field:title/]</a></p>\r\n        </div>\r\n        ",2387,2645);
$z[8][4]['row']="8";
$z[8][4]['typeid']="1";
$z[8][4]['titlelen']="20";
$z[9]=Array("arclist","\r\n          <li><span><a href=\"[field:arcurl/]\"> >&nbsp;[field:title/]</a></span></li>\r\n          ",2850,3006);
$z[9][4]['row']="6";
$z[9][4]['typeid']="7";
$z[9][4]['titlelen']="50";
$z[10]=Array("include","",3067,3104);
$z[10][4]['filename']="footer.htm";

?>