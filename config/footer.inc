<!-------Конец текст блоков------------------------------------------- ------------------------------>
							<br><br>
						</td>
	          <td width="10%">&nbsp;</td>
	        </tr>
	      </table>	         
	    </td>
	    <td width="1" background="pics/tabl_border2.gif"></td>
	  </tr>
	</table>
	
<? 
$var="http://".$_SERVER["SERVER_NAME"]."/";
echo "
<table width=\"100%\" border=\"0\" cellspacing=\"0\" cellpadding=\"0\">
	  <tr> 
	    <td  bgcolor=\"#99CC99\" width=\"150\" valign=\"top\">&nbsp</td>
	    <td width=\"1\" background=\"pics/tabl_border2.gif\"></td>
	    <td valign=\"top\"> 
	      <table width=\"100%\" border=\"0\" cellspacing=\"0\" cellpadding=\"0\">
	        <tr height=\"50px\"> 
	          <td width=\"10%\">&nbsp;</td>
	          <td align=\"center\" width=\"80%\">
         
							<a href=\"javascript:scroll(0,0);\">наверх</a>";
if ($topic!=="index")
   			{	 
echo "        &nbsp;&nbsp;|&nbsp;&nbsp
							<a href=\"http://armiks.ru/?topic=$topic\">в начало раздела</a>
	          	&nbsp;&nbsp;|&nbsp;&nbsp
	          	<a href=\"http://armiks.ru\">на главную</a>";
	        }
echo		"   </td>
	          <td width=\"10%\">&nbsp;</td>
	        </tr>
	      </table>	         
	    </td>
	    <td width=\"1\" background=\"pics/tabl_border2.gif\"></td>
	  </tr>
	</table>";
?>        	        

	<table width="100%" cellspacing="0" cellpadding="0" 
		STYLE="border-top-style: dotted;
	  	border-top-width: 1px;
	  	border-top-color: black">
	  <tr>
	  	<td  bgcolor="#CC99FF" width="150">
	  		<center>
		  		<a href="mailto:info&#64;armiks.ru?subject=from_web_page">info&#64;armiks.ru</a><br>
		  		<a href="http://armiks.ru">http://armiks.ru</a>
		  	</center>
	  	</td>
	  	<td bgcolor="#CC99FF" width="1" background="pics/tabl_border2.gif"> </td>
	    <td valign="middle">
	    <td  bgcolor="#CC99FF" align="right">
<!---------Здесь начинается текст счетчиков (лого)-- ------------------------------------------------>
	      <?php @include('/home/www/armiks/htdocs/pics/table.jpg');?> <? include ('config/counters.inc'); ?>
<!---------Конец текст счетчиков (лого)------------- ------------------------------------------------>
			</td>
			<td bgcolor="#CC99FF"  width="1" background="pics/tabl_border2.gif"> </td>
	  </tr>
	</table>

</body>
</html>