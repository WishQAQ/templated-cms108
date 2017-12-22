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
$z[5]=Array("field","",820,843);
$z[5][4]['name']="typename";
$z[6]=Array("field","",998,1027);
$z[6][4]['name']="position";
$z[7]=Array("channel","\r\n<li><a href='[field:typeurl/]'>[field:typename/]</a></li>\r\n",1035,1212);
$z[7][4]['type']="son";
$z[7][4]['currentstyle']="<li><a href='~typelink~' class='current'>~typename~</a></li>";
$z[8]=Array("list","\r\n<div class=\"newsinclude\">\r\n<div class=\"news_pic fl\"><a href=\"[field:arcurl/]\" title=\"[field:title/]\"><img src=\"[field:picname/]\" width=\"345\" height=\"220\"></a></div>\r\n<div class=\"news_txt fr\"><h1><a href=\"[field:arcurl/]\" title=\"[field:title/]\">[field:title/]</a><br><span>UPTATED:[field:pubdate function=MyDate('Y/m/d',@me)/]</span></h1>\r\n<p>[field:infos/]...</p>\r\n<a href=\"[field:arcurl/]\">查看详情</a>\r\n</div>\r\n<div class=\"c\"></div>\r\n</div>\r\n",1348,1835);
$z[8][4]['pagesize']="10";
$z[9]=Array("pagelist","",1929,2007);
$z[9][4]['listitem']="info,index,end,pre,next,pageno,option";
$z[9][4]['listsize']="5";
$z[10]=Array("include","",2059,2096);
$z[10][4]['filename']="footer.htm";

?>