<?php

require_once("Laboratory.class.php");
require_once("DragonBuilder.class.php");
require_once("OgreBuilder.class.php");

$lab = new Laboratory();

$dragonBuilder = new DragonBuilder();
$ogreBuilder = new OgreBuilder();

$lab->createMonster($dragonBuilder);
$lab->createMonster($ogreBuilder);

echo "Dragon Builder Monster...\n" . $dragonBuilder->monster . "\n\n";
echo "Ogre Builder Monster...\n" . $ogreBuilder->monster . "\n\n";

