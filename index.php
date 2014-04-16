<?
   if (!isset($topic) and $topic=="")
   {
    $topic="index";
   }
include ("config/header.inc");
   if (!isset($part) and $part=="")
   {
    if (is_file("inc/$topic/$topic.txt"))
    {
     include ("inc/$topic/$topic.txt");
    } 
    else
    {
     include ("inc/error/error.txt");
    }
   }
   else
   {
     if (is_file("inc/$topic/$part/$part.txt"))
    {
     include ("inc/$topic/$part/$part.txt");
    } 
    else
    {
     include ("inc/error/error.txt");
    }
   }

include ("config/footer.inc");
?>