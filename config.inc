<?php 

# Navigations-Leiste oben
  $nav['Fakultät für Mathematik'] = 'https://www.tu-chemnitz.de/mathematik/index.de.php';
  $nav['Jasmin Sternkopf'] = 'index.html';


# Spracheinstellungen
  $language = '';
  $lang['de'] = '0';
  $lang['en'] = '0';
  $lang['fr'] = '0';
  $lang['ru'] = '0';
  $lang['cs'] = '0';
  $lang['pl'] = '0';
  $lang['es'] = '0';
  $lang['hu'] = '0';

  $charset = 'utf-8';

# Men&uuml;-Leiste
#0
  $menu[] = array('name' => 'Kontakt',
                   'url' => 'index.html',
                   'level' => '1');
#1
  $menu[] = array('name' => 'Lehre',
                   'url' => 'lehre.html',
                   'level' => '1');



# Autor
  $autor = 'Jasmin Sternkopf';
  $email = 'jasst@hrz.tu-chemnitz.de';

# Seitenkopf
  $icon = '/mbv/ma.ico';

# Seitenfu&szlig;
  $uni_aktuell = array();

  $organisation = 'ma';
  $adresse = '09107 Chemnitz';

# Verlinkung
  $keywords = 'Jasmin Sternkopf';

# Weitere Einstellungen
  $css_in = 'class-ma';
  $javascript = array("jquery-ui");
  $debug = 1;

  #### NICHT Ändern:
  $basedir = dirname(__FILE__);
  require_once('tuc3.inc');
  $_SERVER['CC'] = 'ma';
?>
