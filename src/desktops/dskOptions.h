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
#ifndef dskOPTIONS_H_INCLUDED
#define dskOPTIONS_H_INCLUDED

#pragma once

#include "Desktop.h"
#include "driver/src/VideoInterface.h"
#include "GlobalGameSettings.h"

/// Klasse des Optionen Desktops.
class dskOptions: public Desktop
{
    public:
        dskOptions(void);
        ~dskOptions() override;

    private:
        void Msg_OptionGroupChange(const unsigned int ctrl_id, const unsigned short selection) override;
        void Msg_ButtonClick(const unsigned int ctrl_id) override;
        void Msg_MsgBoxResult(const unsigned int msgbox_id, const MsgboxResult mbr) override;

        void Msg_Group_ButtonClick(const unsigned int group_id, const unsigned int ctrl_id) override;
        void Msg_Group_ProgressChange(const unsigned int group_id, const unsigned int ctrl_id, const unsigned short position) override;
        void Msg_Group_ComboSelectItem(const unsigned int group_id, const unsigned int ctrl_id, const unsigned short selection) override;
        void Msg_Group_OptionGroupChange(const unsigned int group_id, const unsigned int ctrl_id, const unsigned short selection) override;

    private:
        GlobalGameSettings ggs;
        std::vector<VideoMode> video_modes; ///< Vector für die Auflösungen

        void loadVideoModes();
        static bool cmpVideoModes(const VideoMode& left, const VideoMode& right);
        static VideoMode getAspectRatio(const VideoMode& vm);
};

#endif // !dskOPTIONS_H_INCLUDED
