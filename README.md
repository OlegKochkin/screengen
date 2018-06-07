# screengen
Creates the list thumbnails of the video file in console. Based on ffmpeg and QT. About 60 parameters for setting.

Last compile on Fedora 28 with ffmpeg 4.0 and QT5.10.1.

Example video - https://youtu.be/FGfhkvHVTcQ

The project no longer develops. Free for fork and further development.

![Example](http://ipic.su/img/fs/BigBuckBunny.1528404865.jpg)

```
Parameters:
   --preset                  Use section in config file (default - "Default")
   --presetsList             Show all presets in config file (all other parameters ignored)
   --presetInfo              Show all values in preset (all other parameters ignored, example: --presetInfo MyPreset)
   --frames                  Frames count in screenlist (default - 16)
   --width                   Width screenlist (default - 1200)
   --horCount                Frames in horisontal (default - 4)
   --offsetBegin             Time offset from begin (default - "00:01:00")
   --offsetEnd               Time offset from end (default - "00:01:00")
   --listBorder              Depth border screenlist (default - 10)
   --frameBorder             Depth border frame (default - 5)
   --shadowOffset            Offset shadow of frame (default - 5)
   --shadowInt               Intensity shadow of frame (default - 10, range 0-100)
   --shadowColor             R,G,B color shadow of frame (default - "0,0,0" - black, "255,255,255" - white)
   --background              Picture file for background (if empty, fill white)
   --backgroundColor         R,G,B[,A] background color (default - "255,255,255")
   --picType                 Type of picture file (default - "jpg")
   --header                  Header with information (default - true)
   --timeFrame               Time stamp on frame (default - true)
   --fontFrameName           Name font on frame (default - "Liberation Sans")
   --fontFrameSize           Size font on frame (default - 10)
   --fontFrameWeight         Weight font on frame (default - Normal, (Light,DemiBold,Bold,Black))
   --fontFrameItalic         Italic font on frame (default - false)
   --fontFrameColor          R,G,B[,A] color font on frame (default - "255,255,255")
   --fontFrameShadowOffset   Offset shadow of time stamp (default - 0)
   --fontFrameShadowInt      Intensity shadow of time stamp (default - 2, range 0-100)
   --fontFrameShadowColor    R,G,B color shadow of time stamp (default - "0,0,0")
   --stampPos                Position time stamp (default - "rb" (RightBottom), (rb, rt, lb, lr))
   --stampOffset             Offset from the edge of the frame to the timestamp (default - 3)
   --stampStart              Time offset for timestamp (default - "00:00:00")
   --fontHeaderName          Name font on header (default - "Liberation Sans")
   --fontHeaderSize          Size font on header (default - 13)
   --fontHeaderWeight        Weight font on header (default - Bold, (Normal,Light,DemiBold,Black))
   --fontHeaderItalic        Italic font on header (default - false)
   --fontHeaderColor         R,G,B[,A] color font on header (default - "0,0,0")                                                                       
   --headerBackground        Picture file for header background (if empty, default color for header)                                                  
   --headerColor             R,G,B[,A] color header background (default - "255,255,255")                                                              
   --headerBorderColor       R,G,B[,A] color header border (default - "0,0,0")                                                                        
   --headerBorder            Depth border header (default - 2)                                                                                        
   --infoShadowOffset        Offset shadow of information text (default - 5)                                                                          
   --infoShadowInt           Intensity shadow of information text (default - 10, range 0-100)                                                         
   --infoShadowColor         R,G,B color shadow of information text (default - "100,100,100")                                                         
   --logoFile                Picture file for logotype (it is recommended PNG image with alpha channel)                                               
   --logoShadowOffset        Offset shadow of logotype (default - 5)                                                                                  
   --logoShadowInt           Intensity shadow of logotype (default - 10, range 0-100)
   --logoShadowColor         R,G,B color shadow of logotype (default - "100,100,100")
   --foreground              Picture file for foreground (it is recommended PNG image with alpha channel)
   --aspect                  Aspect ratio (if 0.0 - source aspect (DAR), default - 0.0)
   --descr                   Custom text, located at the top of the header
   --outFolder               Folder for result files
   --frameBoxColor           R,G,B[,A] color frame border (default - "120,120,120")
   --frameBox                Depth border frame (default - 0)
   --stampDescr              Custom text, located on frame
   --stampDescrPos           Position custom text (default - "lt" (LeftTop), (rb, rt, lb, lr))
   --timeStep                Time between frames. If not equal to "00:00:00", the parameter "frames" are ignored. (default - "00:00:00")
   --fpm                     Frames per minute. If not equal to "0", the parameter "frames" and "timeStep" are ignored. (default - "0")
   --maxRows                 Maximum rows if use "timeStep" or "fpm". (default - 50)
   --version                 Version string. (default - false)
   --logLevel                FFMPEG log level. (default - -8 (QUIET))
```
