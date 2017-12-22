{dede:noteinfo notename="公司新闻" channelid="1" macthtype="string"
refurl="http://" sourcelang="utf-8" cosort="asc" isref="no" exptime="10" usemore="0" /}

{dede:listrule sourcetype="batch" rssurl="http://" regxurl="http://www.umgg.biz/news/news-sort-34-(*).html"
startid="1" endid="5" addv="1" urlrule="area"
 musthas="" nothas="" listpic="1" usemore="0"}
    {dede:addurls}{/dede:addurls}
    {dede:batchrule}{/dede:batchrule}
    {dede:regxrule}{/dede:regxrule}
    {dede:areastart}<div class="news_contant">{/dede:areastart}
    {dede:areaend}<div class="page"><div class="fy">{/dede:areaend}
{/dede:listrule}
