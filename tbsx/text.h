/*
Copyright (©) 2003-2024 Teus Benschop.

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
*/


#pragma once

#include <config/libraries.h>

class Tbsx_Text
{
public:
  void set_book_id (std::string id);
  void set_book_name (std::string name);
  void set_chapter (int chapter);
  void set_header (std::string header);
  void open_paragraph ();
  void open_verse (int verse);
  void add_text (std::string text, bool supplied = false);
  void open_note ();
  void close_note ();
  void line_break ();
  void flush ();
  std::string line ();
  std::string get_document ();
  void save_document (std::string filename);
private:
  std::string buffer {};
  bool in_note {false};
  std::vector <std::string> output {};
};
