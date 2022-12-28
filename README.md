# OGRE

Operation-A G-code Revisor and Editor
Created by Natecas08

Welcome to this cursed coding project I made at 2AM while I was bored.

Here'a a bit of backstory to this project:

	While I was diagnosing 3D printing issues at work, I noticed that
	the start-up GCODE in cura has a line that writes to the printer's
	LCD screen. Usually saying something along the lines of 
	"<insert printer name here> now printing..."
	
	So changing the text in this line changed what the screen said. Thus
	begins Operation A, which stands for Operation Astley "as in Rick Astley".
	Me being the immature plebian I am, I wanted to rick roll people in the
	most unexpected way possible, which is making the 3D printers rick
	roll current and future operators. Everytime the print starts the next layer,
	the next line within the song would be displayed.
	
	The original plan was to insert lyrics line by line, but that would take
	about 20 minutes of my time. So being the computer programmer I am, I spent
	the next 3 hours coding a program that would do it for me. I'm a programmer,
	and that's what we do.
	
	So after spending another 3 hours, I came up with a suitable corny meme name
	that loosely describes what this does. The Operation A Gcode Revisor and Editor.
	OGRE
	
	In all seriousness, the added benefit of coding this allows for any song lyrics,
	or any words for that matter, get entered in. So if you find this code useful
	or the very least bit intriguing, by all means use it and modify it to your heart's
	desire.

	And I'm not joking when I say modify it. This was purely for the Lulz (foreshadowing
	pun intended) so I put the bare amount of effort needed into this project so you will
	probably find a ton of ways to improve it.
	
Usage:

	If you choose to run the windows installer, you will find a file named "Data.txt". This
	is the file that you add song lyrics / words or phrases to. If you compiled the code yourself,
	you would need to make this file. Yes, I could've had the program make it for me but like
	I said, this was a low effort project.
	
	Once running, you will be prompted for the GCODE file. This also must be within the same
	directory/folder of the application. Type in the full name of the file not including the 
	file extension.
	
	It will then ask for the GCODE command you want it to write. Currently, the table of commands
	only shows the M117 command. This is because I work with Taz printers and that is their
	command. I made it so you can enter different commands incase you come across a printer
	that uses something other than M117.
	
	**I have no clue if this works with other printers because I have no means of testing it
	with others. So if it does, you're welcome! If not, oh well. It was a low effort project
	anyways. 
	
	After parsing through the file and displaying some statistics (for added coolness),
	it will then create a new file with the original file name but with "Op-A" concatenated
	to it and place it within the same directory.. It creates a new file because I'm sure 
	either me or someone else will forget to make a backup and if something wrong happens 
	with the program then that gcode is now broken.
	
Thank you all for using OGRE and I hope you have fun!
	
	
	
