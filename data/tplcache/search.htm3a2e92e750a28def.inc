<?php
$z[0]=Array("field","",109,128);
$z[0][4]['name']="title";
$z[1]=Array("global","",129,155);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",196,225);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",265,323);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",570,605);
$z[4][4]['filename']="head.htm";
$z[5]=Array("global","",1017,1072);
$z[5][4]['name']="keyword";
$z[5][4]['function']="RemoveXSS(@me)";
$z[6]=Array("channel","\r\n<li><a href='[field:typeurl/]'>[field:typename/]</a></li>\r\n",1100,1277);
$z[6][4]['type']="son";
$z[6][4]['currentstyle']="<li><a href='~typelink~' class='current'>~typename~</a></li>";
$z[7]=Array("list","\r\n<div class=\"newsinclude\">\r\n<div class=\"news_pic fl\"><a href=\"[field:arcurl/]\" title=\"[field:title/]\"><img src=\"[field:picname/]\" width=\"345\" height=\"220\"></a></div>\r\n<div class=\"news_txt fr\"><h1><a href=\"[field:arcurl/]\" title=\"[field:title/]\">[field:title/]</a><br><span>UPTATED:[field:pubdate function=MyDate('Y/m/d',@me)/]</span></h1>\r\n<p>[field:description/]...</p>\r\n<a href=\"[field:arcurl/]\">查看详情</a>\r\n</div>\r\n<div class=\"c\"></div>\r\n</div>\r\n",1413,1906);
$z[7][4]['pagesize']="10";
$z[8]=Array("pagelist","",2000,2078);
$z[8][4]['listitem']="info,index,end,pre,next,pageno,option";
$z[8][4]['listsize']="5";
$z[9]=Array("include","",2130,2167);
$z[9][4]['filename']="footer.htm";

?>