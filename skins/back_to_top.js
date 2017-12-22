/*浮动窗口*/
// (function(){
// 	var n=400;
// 	var obj=document.getElementById("AdLayer");
// 	if(!obj){return false;}
// 	var x=0;
// 	var fe=$("#AdLayer");
// 	window.onscroll=function(){
// 		obj.style.top=(document.body.scrollTop||document.documentElement.scrollTop)+n+'px';
// 		x=(document.body.scrollTop||document.documentElement.scrollTop)+n;
// 		if(x<=460){fe.fadeOut().hide()}else{fe.fadeIn().show()};
// 	};
// 	window.onresize=function(){obj.style.top=(document.body.scrollTop||document.documentElement.scrollTop)+n+'px'};
// })();

$('#AdLayer').hide();
	 $(function(){
            $(window).scroll(function(){
                if($(this).scrollTop()>1){//当window的scrolltop距离大于1时，go to top按钮淡出，反之淡入
                    $("#AdLayer").fadeIn();
                } else {
                    $("#AdLayer").fadeOut();
                }
            });
			
        });
	
	$('#AdLayer a').click(function(){
		$('html,body').animate({scrollTop:0},'slow');
	});