#include "wbInput.h"

std::vector<wb::Input::Key> wb::Input::mKeys = {};

int ASCII[(UINT)wb::eKeyCode::END] =
{
    'Q','W','E','R','T','Y','U','I','O','P',
    'A','S','D','F','G','H','J','K','L',
    'Z','X','C','V','B','N','M',
};

void wb::Input::Initailize()
{
   // mKeys.resize((UINT)eKeyCode::END);

    for (size_t i = 0; i < (UINT)eKeyCode::END; i++)
    {
        Key key = {};
        key.bPressed = false;
        key.state = eKeyState::None;
        key.KeyCode = (eKeyCode)i;
    
        mKeys.push_back(key);
    }
}

void wb::Input::Update()
{
    for (size_t i = 0; i < mKeys.size(); i++)
    {
        // 키가 눌렸다
        if (GetAsyncKeyState(ASCII[i]) & 0x8000)
        {
            if (mKeys[i].bPressed)
                mKeys[i].state = eKeyState::Pressed;
            else
                mKeys[i].state = eKeyState::Down;
            
            mKeys[i].bPressed = true;
        }
        else // 키가 안눌렸다.
        {
            if (mKeys[i].bPressed)
                mKeys[i].state = eKeyState::Up;
            else
                mKeys[i].state = eKeyState::None;

            mKeys[i].bPressed = false;
        }
    }
}
