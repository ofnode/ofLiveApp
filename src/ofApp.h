#pragma once

#include "ofLiveMain.h"

class ofApp : public ofLiveApp
{
  public:
    void setup  ();
    void update ();
    void draw   ();
    void exit   ();

    void keyPressed      (ofKeyEventArgs&);
    void keyReleased     (ofKeyEventArgs&);

    void mouseMoved      (ofMouseEventArgs&);
    void mouseDragged    (ofMouseEventArgs&);
    void mousePressed    (ofMouseEventArgs&);
    void mouseReleased   (ofMouseEventArgs&);
    void mouseScrolled   (ofMouseEventArgs&);
    void mouseEntered    (ofMouseEventArgs&);
    void mouseExited     (ofMouseEventArgs&);

    void touchDown       (ofTouchEventArgs&);
    void touchMoved      (ofTouchEventArgs&);
    void touchUp         (ofTouchEventArgs&);
    void touchDoubleTap  (ofTouchEventArgs&);
    void touchCancelled  (ofTouchEventArgs&);

    void windowResized   (ofResizeEventArgs&);
    void dragged         (ofDragInfo&);
    void messageReceived (ofMessage&);

    SERIALIZE_BEGIN
    //SERIALIZE()
    SERIALIZE_END
};
