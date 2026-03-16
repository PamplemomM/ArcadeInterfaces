/* ------------------------------------------------------------------------------------ *
 *                                                                                      *
 * EPITECH PROJECT - Tue, Mar, 2026                                                     *
 * Title           - ArcadeInterfaces                                                   *
 * Description     -                                                                    *
 *     IGameModule                                                                      *
 *                                                                                      *
 * ------------------------------------------------------------------------------------ *
 *                                                                                      *
 *             ███████╗██████╗ ██╗████████╗███████╗ ██████╗██╗  ██╗                     *
 *             ██╔════╝██╔══██╗██║╚══██╔══╝██╔════╝██╔════╝██║  ██║                     *
 *             █████╗  ██████╔╝██║   ██║   █████╗  ██║     ███████║                     *
 *             ██╔══╝  ██╔═══╝ ██║   ██║   ██╔══╝  ██║     ██╔══██║                     *
 *             ███████╗██║     ██║   ██║   ███████╗╚██████╗██║  ██║                     *
 *             ╚══════╝╚═╝     ╚═╝   ╚═╝   ╚══════╝ ╚═════╝╚═╝  ╚═╝                     *
 *                                                                                      *
 * ------------------------------------------------------------------------------------ */

#ifndef INCLUDED_IGAMEMODULE_HPP
    #define INCLUDED_IGAMEMODULE_HPP

#include <iostream>

class IGameModule
{
    protected:
    public:
        virtual ~IGameModule() = default;

        virtual int loadAssets() = 0;
        virtual int destroyAssets() = 0;

        virtual bool isOpen() = 0;
        virtual void updateGame() = 0;
};

#endif
