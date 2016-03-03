// Copyright (c) 2005 - 2015 Settlers Freaks (sf-team at siedler25.org)
//
// This file is part of Return To The Roots.
//
// Return To The Roots is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 2 of the License, or
// (at your option) any later version.
//
// Return To The Roots is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Return To The Roots. If not, see <http://www.gnu.org/licenses/>.
#ifndef GLARCHIVITEM_MUSIC_INCLUDED
#define GLARCHIVITEM_MUSIC_INCLUDED

#pragma once

#include "../libsiedler2/src/ArchivItem_Sound.h"
class Sound;

class glArchivItem_Music : public virtual libsiedler2::baseArchivItem_Sound
{
    public:
        /// Konstruktor von @p glArchivItem_Sound.
        glArchivItem_Music(void);
        /// Kopiekonstruktor von @p glArchivItem_Sound.
        glArchivItem_Music(const glArchivItem_Music& item);
        glArchivItem_Music& operator=(const glArchivItem_Music& item);

        /// Destruktor von @p glArchivItem_Sound.
        ~glArchivItem_Music(void) override;

        /// Spielt die Musik ab.
        virtual void Play(const unsigned repeats) = 0;

    protected:
        /// Handle to the sound, managed by driver, hence safe to copy
        Sound* sound;
};

#endif // !GLARCHIVITEM_MUSIC_INCLUDED
