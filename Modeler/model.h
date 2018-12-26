//=============================================================================
// t@C: model.h
//=============================================================================
// fÌÝèE`æð§ä
//=============================================================================

#ifndef __MODEL_H__
#define __MODEL_H__

// wb_t@CÌCN[h
#include "animator.h"

// t[ÔÌÅål
int max_frame_count = 500;

// ModelNXÌè`iModelerViewNXðp³j
class Model : public ModelerView {
private:
    //```````````````````````````````````
	//æ3TÛè
    //---------------------------------------------------------------------

	// t[Ô
    int frame_count;

    //-------------------------------------------------------------------------
    // §äÏ
    //-------------------------------------------------------------------------

        // ```ÏðÇÁ```


    //```````````````````````````````````


public:
    // RXgN^iX[p[NXÌRXgN^ðÄÑo·j
    Model( int x, int y, int w, int h, char* label ) : ModelerView( x, y, w, h, label )
    {
        //```````````````````````````````````
		//æ3TÛè
        //---------------------------------------------------------------------

        // t[ÔÌú»
        frame_count = 0;

        //---------------------------------------------------------------------
        // ú»
        //---------------------------------------------------------------------

            // ```Ïðú»```


		//```````````````````````````````````
    }

    //```````````````````````````````````
	//æ3TÛè
	//---------------------------------------------------------------------

    // ©®Aj[VÌÝè
    void SetAutomaticAnimation()
    {
        //-----------------------------------------------------------------
        // Aj[V
        //-----------------------------------------------------------------

            // ```vOðLq```

        //-----------------------------------------------------------------
    }

	// è®Aj[VÌÝè
    void SetManualAnimation()
    {
        //-----------------------------------------------------------------
        // Aj[V
        //-----------------------------------------------------------------

            // ```vOðLq```

		//-----------------------------------------------------------------
    }

    //```````````````````````````````````


    // `æÌO
    void BeginPaint()
    {
        // ¼§¾ðLø»
        glEnable( GL_BLEND );
        // ¬û@Ìwè
        glBlendFunc( GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA );
    }

    // `æÌã
    void EndPaint()
    {
        // ¼§¾ð³ø»
        glDisable( GL_BLEND );
    }


    // IuWFNgÌ`æ
    void draw()
    {
		//```````````````````````````````````
		//æ3TÛè
		//---------------------------------------------------------------------
        // ©®Aj[VÌ
        if ( IsAutomaticAnimation() && frame_count<max_frame_count ) {
            // t[ÔÌXV
            SetSliderValue( FRAME_CONTROLS, ++frame_count );
            // ©®Aj[V
            SetAutomaticAnimation();
        }
        // è®Aj[VÌ
        else {
            // t[Ôðæ¾
            frame_count = (int)GetSliderValue( FRAME_CONTROLS );
            // è®Aj[V
            SetManualAnimation();
        }
		//```````````````````````````````````


        // X[p[NXÌ`æ\bhðR[iK{j
        ModelerView::draw();


        // `æJn
        BeginPaint();

        //---------------------------------------------------------------------
        // IuWFNgð`æ
        //---------------------------------------------------------------------

		 // ```vOðLq```

         //setDiffuseColor(0.5f, 0.0f, 0.0f, 1.0f );
         //drawBox(3.0f,3.0f,3.0f);

         //setDiffuseColor(0.5f, 0.0f, 0.5f, 1.0f );
         //glTranslatef(2.0, 1.0, 3.0);
         //drawBox(3.0f,3.0f,3.0f);

         //setDiffuseColor(0.0f, 0.5f, 0.0f, 1.0f );
         //drawSphere(3.0f);

         //setDiffuseColor(0.0f, 0.0f, 0.5f, 1.0f );
         //glTranslatef(GetSliderValue(X_POSITION), 1.0, 3.0);
         //drawBox(3.0f,3.0f,3.0f);

         //setDiffuseColor(0.0f, 0.5f, 0.0f, 1.0f );
         //drawTorus(3.0f,3.0f,3.0f);



         //setDiffuseColor(0.5f, 0.0f, 0.0f, 1.0f );
         //drawRectangle( 1.0f, 3.0f, 2.0f,
         //               2.0f, 1.0f, 3.0f,
         //               6.0f,2.0f,7.0f,
         //               5.0f,3.0f,1.0f );

        setDiffuseColor(0.5f, 0.0f, 0.0f, 1.0f );
        drawTriangularPrism( 1.0f, 3.0f, 2.0f,
                             2.0f, 1.0f, 3.0f,
                             6.0f, 2.0f, 7.0f, 5.0 );


        //---------------------------------------------------------------------

        // `æI¹
        EndPaint();
    }
};

// __MODEL_H__
#endif
