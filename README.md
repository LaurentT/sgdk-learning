# Random notes regarding SGDK or video games development in general

## How to see which sprites are displayed

In an emulator we can open VDP sprites and see which one are displayed:

![alt text](documentation/readSprites.png 'View sprites')

The 1st displayed sprite is the one with number 0
The 2nd sprite is the one indicated by the link of sprite number 0
etc., until a link goes back at number 0
here we see that sprite n° 60 has a link 0, that's the last displayed sprite
It allows to get a sprite above or under another just by changing the links
