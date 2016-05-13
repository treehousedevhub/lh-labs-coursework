$(document).ready(function(){

 $('p').hover(
    function(){
      $(this).addClass('highlight-paragraph');
   },
    function(){
      $(this).removeClass('highlight-paragraph');
   }
);

});

$(document).ready(function(){
	$('.listchecked').click(function(){
		 $(this).toggleClass('highlight-listitems');  

	});
});


$(document).ready(function(){
	$('#hide-all-img').click(function(){
	$('img').hide();
	$('#hide-all-img').hide()
	$('#unhide-all-img').show();
	});
});

$(document).ready(function(){
	$('#unhide-all-img').click(function(){
	$('img').show();
	$('#hide-all-img').show()
	$('#unhide-all-img').hide();
	});
});




